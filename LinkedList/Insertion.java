package LinkedList;
class LinkedList {
  Node head;

  class Node {
    int data;
    Node next;
    Node(int d){
      data = d;
      next = null;
    }
  }

  //insert a new node at front of the list.
  public void push(int new_data) {
    Node newNode = new Node(new_data);
    newNode.next = head;
    head = newNode;
  }

  //insert a new node after the given previous node.
  public void insertAfter(Node prev_node, int new_data){
    if(prev_node == null){
      System.out.println("The given prev node cannot be null");
      return;
    }
    Node new_Node = new Node(new_data);
    new_Node.next = prev_node.next;
    prev_node.next= new_Node;
  }

  //appends a new node at the end.
  public void append(int new_data){
    Node new_Node = new Node(new_data);

    if(head == null){
      head =new Node(new_data);
      return;
    }
    new_Node.next = null;

    Node last = head;
    while(last.next != null)
      last = last.next;

    last.next = new_Node;
    return;
    
  }

  public void printlist(){
    Node tnode = head;
    while(tnode != null){
      System.out.println(tnode.data + " ");
      tnode = tnode.next;
    }
  }

  public static void main(String[] args) {
    LinkedList list = new LinkedList();
    list.append(3);
    
  }


}