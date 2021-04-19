
public class Main {

	public static void main(String[] args) {
		
		Persona p = new Persona(1111111, 38, 4);
	
		Local l1 = new Local();
		l1.setRubro("alimentacion");
		
		Local l2 = new Local();
		l2.setRubro("farmacia");
		
		Local l3 = new Local();
		l3.setRubro("cine");
		
		p.puedoIrAComprar(l1, 1);
		p.puedoIrAComprar(l2, 28);
		p.puedoIrAComprar(l3, 10);
		
	}

}
