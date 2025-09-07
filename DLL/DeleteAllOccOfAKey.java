public class DeleteAllOccOfAKey {
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

    Node deleteAllOccurrences(Node head, int k){
      Node temp  = head;
      while(temp != null){
        if(temp.data == k) {
            if(temp == head){
            head = temp.next;
            }

            Node nextNode  = temp.next;
            Node prevNode = temp.prev;
            if(nextNode != null) nextNode.prev = prevNode;
            if(prevNode != null) prevNode.next = nextNode;

            temp = nextNode;
        }
        else {
            temp = temp.next;
        }
      }
      return head;
    }
    
    
  }
}
