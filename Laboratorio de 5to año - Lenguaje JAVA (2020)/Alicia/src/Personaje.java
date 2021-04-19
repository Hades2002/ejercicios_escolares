
public class Personaje {
	
	private int secretos = 0;
	private int locura = 0;
	private int locuraMaxima = 1000;
	private Ubicacion miMundo;
	
	public Personaje(int locura, int secretos) {
		this.setLocura(locura);
		this.setSecretos(secretos);
	}
	
	public void embellecer(int valor) {
		
		setLocura(locura + valor);
		secretos -= 10;
	}
	
	public boolean estaEnMaravillas () {
		boolean resultado = miMundo.estaEnMaravillas();
		return resultado;
	}
	
	public boolean esNormal() {
		boolean respuesta = true;
		if ( locura < 10 && secretos > 500)
		{
			respuesta = true;
		}
		else
		{
			respuesta = false;
		}
		return respuesta;
	}
	
	private boolean superUmbralDeLocura() {
		boolean respuesta=true;
		int umbral = locuraMaxima*75/100;
		if(locura > umbral) {
			respuesta=true;
		}
		else {
			respuesta=false;
		}
		return respuesta;
	}
	
	public boolean esLinda() {
		 
		return superUmbralDeLocura() && estaEnMaravillas();
	}

	public int getLocura() {
		return locura;
	}

	public void setLocura(int locura) {
		if ( locura > locuraMaxima )
		{
			this.locura = locuraMaxima;
		}
		else
		{
			this.locura = locura;
		}
			
	}

	public int getSecretos() {
		return secretos;
	}

	public void setSecretos(int secretos) {
		this.secretos = secretos;
	}
	
	public int getLocuraMaxima() {
		return locuraMaxima;
	}

	public void setLocuraMaxima(int locuraMaxima) {
		this.locuraMaxima = locuraMaxima;
	}

	public Ubicacion getMiMundo() {
		return miMundo;
	}

	public void setMiMundo(Ubicacion miMundo) {
		this.miMundo = miMundo;
	}
	
}
