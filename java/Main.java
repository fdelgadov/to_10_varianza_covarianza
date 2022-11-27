public class Main{
  public static void main(String[] args){
    X x = new X('x');
    Mc m = new Mc();
    Y y = new Y('y', 2);

    x.foo(m);
    System.out.println();
    y.foo(m);
  }
}
