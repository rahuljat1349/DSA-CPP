
// class Node {
// public:
//     int val;
//     Node* next;
//     Node* random;

//     Node(int _val) {
//         val = _val;
//         next = NULL;
//         random = NULL;
//     }
// };


// int main(){

//     Node *copyRandomList(Node *head)
//     {
//         if (head == NULL)
//         {
//             return NULL;
//         }
//         unordered_map<Node *, Node *> m;
//         Node *newHead = new Node(head->val);
//         Node *oldTemp = head->next;
//         Node *newTemp = newHead;
//         m[head] = newHead;

//         while (oldTemp != NULL)
//         {
//             Node *copyNode = new Node(oldTemp->val);
//             m[oldTemp] = copyNode;
//             newTemp->next = copyNode;

//             oldTemp = oldTemp->next;
//             newTemp = newTemp->next;
//         }

//         newTemp = newHead;
//         oldTemp = head;

//         while (oldTemp != NULL)
//         {
//             newTemp->random = m[oldTemp->random];
//             oldTemp = oldTemp->next;
//             newTemp = newTemp->next;
//         }
//         return newHead;
   
// }