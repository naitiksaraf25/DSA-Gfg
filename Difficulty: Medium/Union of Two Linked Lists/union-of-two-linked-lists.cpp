/* Linked List Node Structure
class Node {
	public:
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
}; */

class Solution {
	public:
	Node* makeUnion(Node* head1, Node* head2) {
		// code here
		unordered_set<int> visited;
		
		Node* dummy = new Node(-1);
		Node* tail = dummy;
		Node* temp = head1;
		while (temp != nullptr) {
			if (visited.find(temp->data) == visited.end()) {
				visited.insert(temp->data);
				tail->next = new Node(temp->data);
				tail = tail->next;
			}
			temp = temp->next;
		}
		
		Node* temp2 = head2;
		while (temp2 != nullptr) {
			if (visited.find(temp2->data) == visited.end()) {
				visited.insert(temp2->data);
				tail->next = new Node(temp2->data);
				tail = tail->next;
			}
			temp2 = temp2->next;
		}
		
		return dummy->next;
	}
};
