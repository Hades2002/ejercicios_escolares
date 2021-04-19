
public class Persona {

	private float fiebre;
	private int salidas;
	private Integer dni;
	

	public Persona(float fiebre, int dni, int salidas) {
		this.fiebre = fiebre;
		this.dni = dni;
		this.salidas = salidas;
	}
	
	public boolean meAislo() {
		boolean respuesta = false;
		if (getFiebre() > 37) {
			respuesta = true;
		}
		else{
			respuesta = false;
		}
		return respuesta;
	}
	
	public boolean puedoIrAComprar (Local local, Integer dia)
	{
		if ( !meAislo() && local.esEsencial() )
		{
			boolean dniEsPar = (dni % 2 == 0);
			boolean diaEsPar = (dia % 2 == 0);
			
			if ( dniEsPar == diaEsPar) {
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	
	
	public boolean estoyBuscandoElVirus()
	{
		boolean respuesta = false;
		if (salidas > 10) {
			respuesta = true;
		}
		else {
			respuesta = false;
		}
		return respuesta;
	}
	
	public void salir()
	{
		salidas++;
	}
	
	public float getFiebre() {
		return fiebre;
	}
	public void setFiebre(float fiebre) {
		this.fiebre = fiebre;
	}
	public Integer getDni() {
		return dni;
	}
	public void setDni(Integer dni) {
		this.dni = dni;
	}
	public int getSalidas() {
		return salidas;
	}
	public void setSalidas(int salidas) {
		this.salidas = salidas;
	}
}
