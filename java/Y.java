public class Y extends X {
  int num;

  Y(char d, int n){
    super(d);
    num = n;
  }

  // Hace override
  // Covarianza en return soportada
  /* 
  @Override
  public C foo(B p){
    System.out.println("Y::foo()");
    p.aa();
    p.ba();
    
    return null;
  }
  */

  // No puede hacer override
  // Contravarianza en return no soportada
  // Error:
/*
javac Main.java
./Y.java:24: error: foo(B) in Y cannot override foo(B) in X
  public A foo(B p){
           ^
  return type A is not compatible with B
./Y.java:23: error: method does not override or implement a method from a supertype
  @Override
  ^
2 errors
*/
  /*
  @Override
  public A foo(B p){
    System.out.println("Y::foo()");
    p.aa();
    p.ba();
    
    return null;
  }
  */

  // No hace override
  // X::foo() y Y::foo()
  /*
  //@Override
  public B foo(C p){
    System.out.println("Y::foo()");
    p.aa();
    p.ba();
    
    return null;
  }
  */

  // No hace override
  // X::foo()
  ///*
  //@Override
  public B foo(A p){
    System.out.println("Y::foo()");
    p.aa();
    
    return null;
  }
  //*/
  
  // No hace override
  // X::foo() y Y::foo()
  /*
  //@Override
  public C foo(C p){
    System.out.println("Y::foo()");
    p.aa();
    p.ba();
    p.ca();
    
    return null;
  }
  */
  
  // No hace override
  // X::foo()
  /*
  //@Override
  public A foo(A p){
    System.out.println("Y::foo()");
    p.aa();
    
    return null;
  }
  */

  // Conclusión
  // No es posible aplicar covarianza y contravarianza en el parámetro, ya que
  // no redefine la función X::foo()
  //
  // Es posible hacer covarianza en el return, ya que Y::foo() retorna C,
  // X::foo() retorna B y C es subtipo de B.
  //
  // No es posible hacer contravarianza en el return, ya que A no es subtipo de
  // B
}
