package Stack;
public class Stack {
private Node top; 
public Stack(){        
}   
public void push (Node node){   
     node.previous = top;
     this.top = node;
}
public Node pop(){
       Node aux = null;
       if(top==null){
            System.out.println("There's nothing to unstack");
       }
       else{
            aux = this.top;
            this.top=this.top.previous;             
       }
            return aux;
}
void showStack(){
        Node aux=this.top;
        while(aux!=null)
        {
            System.out.println(aux.value);
            aux = aux.previous;
        }
        
}
}   
    
            
