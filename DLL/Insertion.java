

public class Insertion {
  class Node {
    int data;
    Node next;
    Node prev;
    Node head;

    public Node(int data) {
      this.data = data;
      this.next = null;
      this.prev = null;
    }

    // Insert at the beginning
    public void insertAtBeginning(int data){
      Node newNode = new Node(data);
      if(head == null) {
        head = newNode;
      } else {
        newNode.next = head;
        head.prev = newNode;
        head = newNode;
      }
    }

    //Insert at the end
    public void insertAtEnd(int data){
      Node newNode = new Node(data);
      if(head == null){
        head = newNode;
      } else {
        Node temp = head;
        while(temp.next != null) {
          temp = temp.next;
        }
        temp.next = newNode;
        newNode.prev = temp;
      }
    }

    //Insert at specific position(1-based index)
    public void insertAtPosition(int data, int position){
      if(position <= 1) {
        insertAtBeginning(data);
        return;
      }
      Node newNode = new Node(data);
      Node temp = head;
      for(int i=1; temp != null && i < position - 1; i++){
        temp = temp.next;
      }
      if(temp == null || temp.next == null) {
        insertAtEnd(data);
        return;
      }
      newNode.next = temp.next;
      newNode.prev = temp;
      temp.next.prev = newNode;
      temp.next = newNode;
    }
  }
}
