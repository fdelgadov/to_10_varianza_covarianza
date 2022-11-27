public class X {
  char data;

  X(char d){
    data = d;
  }

  public B foo(B p){
    System.out.println("X::foo()");
    p.aa();
    p.ba();
    
    return p;
  }
}
