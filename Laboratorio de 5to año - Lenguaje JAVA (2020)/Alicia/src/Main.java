
public class Main {

	public static void main(String[] args) {
		
		Personaje alicia = new Personaje(0, 0);
		Ubicacion Marravilla = new Ubicacion();
		Marravilla.setDistanciaABsAs(100);
		
		alicia.setMiMundo(Marravilla);

	}

}
