public class ClimaDiario {
	//Variables
	private int minimo, maximo,precipitacion;
	private String dia;
	//Metodos
	public int promedioTemperatura(){
		int promedio=0;
		promedio = (maximo - minimo)/2;
		return promedio;
	}

	public boolean llueve(){
		boolean respuesta=false;
		if(precipitacion > 50){
			respuesta=true;
		}
		return respuesta;
	}

	public boolean esBajoCero(){
		boolean respuesta=false;
		if(minimo <0){
			respuesta= true;
		}
		return respuesta;	
		}
	
	//Get y Set
	public String getDia() {
		return dia;
	}
	public void setDia(String dia) {
		this.dia = dia;
	}
	
	public int getMinimo() {
		return minimo;
	}
	
	public void setMinimo(int minimo) {
		this.minimo = minimo;
	}
	
	public int getMaximo() {
		return maximo;
	}
	
	public void setMaximo(int maximo) {
		this.maximo = maximo;
	}
	
	public int getPrecipitacion() {
		return precipitacion;
	}
	
	public void setPrecipitacion(int precipitacion) {
		this.precipitacion = precipitacion;
		}
	}
