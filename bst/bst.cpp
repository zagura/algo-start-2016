template <class T>
struct BSTNode{
	BSTNode left;
	BSTNode right;
	T key;
};


template <typename T>
class BST{

public:
	void insert(T key);
	void remove(T key);
	BSTNode<T>* root;
	BSTNode<T>* search(T key);
	BST();
};

template<class T> BST<T>::BST(){

	this->root = nullptr;
}

int main(){}