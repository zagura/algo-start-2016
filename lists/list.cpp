struct Node{
	Node* next;
	int val;
};

Node* push_front(Node* head, int v){
	Node* current = new Node;
	current->val = v;
	current->next = head;
	return current;
}

Node* search(Node* head, int key){
	while(head != NULL){
		if(head->val == key) return head;
		head = head->next;
	}
	return NULL;
}

Node* remove_element(Node* head, int key){
	if(head != NULL){
		if(head->val != key){
			head->next = remove_element(head->next);
			return head;
		}
		if(head->val == key){
			Node* next = head->next;
			delete head;
			return next;
		}
	}
	return NULL;
}