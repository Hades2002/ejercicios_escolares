
public class Ubicacion {
	
	private int distanciaABsAs;
	
	public boolean estaEnMaravillas() {
		boolean respuesta=false;
		if(distanciaABsAs < 0) {
			respuesta=true;
		}
		else {
			respuesta=false;
		}
		
		return respuesta;
	}

	public int getDistanciaABsAs() {
		return distanciaABsAs;
	}

	public void setDistanciaABsAs(int distanciaABsAs) {
		this.distanciaABsAs = distanciaABsAs;
	}
	
}
