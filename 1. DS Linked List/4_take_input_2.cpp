#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void print(Node *head)
{
    /*
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }*/
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL; /// LL is empty
    Node *tail = NULL; /// LL is empty
    while (data != -1)
    {
        /// creating LL
        Node *n = new Node(data);
        /// 1st node
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n; /// Inserting at Tail
            tail = n;
        }

        cin >> data;
    }
    return head;
}

Node *takeInput2()
{
    int data;
    cin >> data;
    Node *head = NULL; /// LL is empty
    Node *tail = NULL; /// LL is empty
    while (data != -1)
    {
        /// creating LL
        Node *n = new Node(data);
        /// 1st node
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            n->next = head; /// Inserting at head
            head = n;
        }
        cin >> data;
    }
    return head;
}
int main()
{
    /// Statically
    Node n1(1);
    Node *head = &n1;

    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    /// inserting at ail
    Node *head2 = takeInput2(); /// inserting at head
    print(head2);

    /*n1.next = &n2;
  cout<<n1.data<<" "<<n2.data<<endl;

  Node *head = &n1;

  cout<<head->data<<endl;

  /// Dynamically
  Node *n3 = new Node(3);
  Node *n4 = new Node(4);
  n3->next = n4;
  */

    return 0;
}
