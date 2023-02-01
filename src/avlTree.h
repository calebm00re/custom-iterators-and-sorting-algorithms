//
// Created by Caleb Moore on 10/16/21.
//

#ifndef INC_21F_PA02_CALEB2_AVLTREE_H
#define INC_21F_PA02_CALEB2_AVLTREE_H
#include <stack>

using namespace std;

template <class T>
class avlTree{
private:
    struct node{
        T data;
        node* left{nullptr};
        node* right{nullptr};
        int height{0};
        node() = default;
        node(const node& x){
            data = x.data;
            left = x.left;
            right = x.right;
            height = x.height;
        }
        node(const T& t){
            data = t;
        }
    };

    node* root;
    node* temp;
    int num_nodes{0};

    inline int height(node*& t){
        if (t == nullptr){
            return -1;
        }
        else{
            return t->height;
        }
    }

    //balance function
    inline void balance(node*& t){
        if(height(t->left) - height(t->right) > 1){
            if(height(t->left->left) >= height(t->left->right)){
                //rotateWithLeftChile(t); //case one
                temp = t->left;
                t->left = temp->right;
                temp->right = t;
                t->height = max(height(t->left), height(t->right)) + 1;
                t = temp;
            }
            else{
                //doubleWithLeftChild(t); //case two
                temp = t->left->right;
                t->left->right = temp->left;
                temp->left = t->left;
                t->left->height = max(height(t->left->right), height(t->left->left)) + 1;
                t->left = temp;
                //rotate second part
                temp = t->left;
                t->left = temp->right;
                temp->right = t;
                t->height = max(height(t->left), height(t->right)) + 1;
                t = temp;
            }
        }
        else if(height(t->right) - height(t->left) > 1){
            if(height(t->right->left) >= height(t->right->right)){
                //doubleWithRightChild(t); //case three
                temp = t->right->left;
                t->right->left = temp->right;
                temp->right = t->right;
                t->right->height = max(height(t->right->right), height(t->right->left)) + 1;
                t->right = temp;
                //second rotate
                temp = t->right;
                t->right = temp->left;
                temp->left = t;
                t->height = max(height(t->right), height(t->left)) + 1;
                t = temp;
            }
            else{
                //rotateWithRightChild(t); //case four
                temp = t->right;
                t->right = temp->left;
                temp->left = t;
                t->height = max(height(t->right), height(t->left)) + 1;
                t = temp;
            }
        }
        t->height = max(height(t->left), height(t->right)) + 1;
    }

    //private insert
    inline void insert(const T& s, node*& t){
        if(t == nullptr){
            t = new node(s);
            num_nodes++;
            //set the new node up
        }
        else if(t->data < s){
            insert(s, t->right);
        }
        else if(s < t->data){
            insert(s, t->left);
        }
        balance(t);
    }

    //displaying
    void display(node*& t){
        if(t != nullptr){
            display(t->left);
            cout << t->data << " ";
            display(t->right);
        }
    }

    void empty(node *&n) {
        if (n != nullptr){
            empty(n->left);
            empty(n->right);
            delete n;
        }
        n = nullptr;
    }

    //public section
public:
    avlTree() : root(nullptr){};
    avlTree(const avlTree<T>& rhs) : root(nullptr){*this = rhs;}
    avlTree& operator= (const avlTree<T>& rhs){*this = rhs;}
    ~avlTree(){empty(root);}
    void insert(const T& t);
    void clear();
    void printInOrder();

    //iterator
    struct Iterator
    {
        friend class avlTree;
    private:
        node* ptr;
        explicit Iterator(node* newptr) : ptr(newptr) {};
        stack<node*> s;
    public:
        Iterator() : ptr(nullptr) {}
        bool operator!= (const Iterator& i) const { return ptr != i.ptr; }
        bool operator!= (const T& t) const { return ptr->data != t; }
        bool operator== (const Iterator& i) const { return ptr == i.ptr; }
        bool operator== (const T& t) const { return ptr->data == t; }
        T& operator*() const { return s.top()->data; }
        Iterator operator++(int) {
            Iterator tmp = *this;
            node* c = s.top()->right;
            s.pop();
            while (c != nullptr){
                s.push(c);
                c = c->left;
            }
            if(s.empty()){
                this->ptr = nullptr;
            }
            else{
                this->ptr = s.top();
            }
            return tmp;
        }
        Iterator& operator++() {
            node* c = s.top()->right;
            s.pop();
            while (c != nullptr){
                s.push(c);
                c = c->left;
            }
            if(s.empty()){
                this->ptr = nullptr;
            }
            else{
                this->ptr = s.top();
            }
            return *this;
        }
        friend std::ostream& operator<< (std::ostream& o, const Iterator& i){
            o << i.ptr->data;
            return o;
        }
    };

    Iterator begin() {
        node* current = root;
        Iterator it;
        it.s.push(current);
        while (current->left != nullptr){
            current = current->left;
            it.s.push(current);
        }
        //set this to something
        it.ptr = current;
        return it;
    }
    Iterator end() {
        node* current = root;
        while (current->right != nullptr){
            current = current->right;
        }
        return Iterator(nullptr);
    }
};

template<class T>
void avlTree<T>::clear() {
    empty(root);
}

template<class T>
void avlTree<T>::insert(const T &t) {
    insert(t, root);
}

template<class T>
void avlTree<T>::printInOrder() {
    display(root);
}

#endif //INC_21F_PA02_CALEB2_AVLTREE_H
