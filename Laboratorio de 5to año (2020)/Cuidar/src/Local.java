
public class Local {
	
	private String rubro;
	
	public boolean esEsencial()
	{
		boolean respuesta=false;
		//|| => OR
		if ( rubro.equals("alimentacion") || rubro.equals("farmacia") )
		{
			respuesta=true;
		}
		else
		{
			respuesta=false;
		}
		return respuesta;
	}

	public String getRubro() {
		return rubro;
	}

	public void setRubro(String rubro) {
		this.rubro = rubro;
	}
	
}
