//Import para los ArrayList
import java.util.ArrayList;

public class Pronostico {
	//ArrayList y sus respectivos metodos.
	public ArrayList<ClimaDiario> climas= new ArrayList<ClimaDiario>();
	//Dia mas frio
	public ClimaDiario diaMasFrio( ArrayList<ClimaDiario> climas){
		ClimaDiario diaFrio= climas.get(0);
		for(ClimaDiario dia :climas){
			if(diaFrio.getMinimo() > dia.getMinimo()){
				diaFrio=dia;
			}
		}
		return diaFrio;
	}
	
	//Dia mas caluroso
	public ClimaDiario diaMasCaluroso( ArrayList<ClimaDiario> climas){
		
		ClimaDiario eldiaCaluroso=climas.get(0);
		for(ClimaDiario dia : climas){
			if(eldiaCaluroso.getMaximo()< dia.getMaximo()){
				eldiaCaluroso= dia;
			}
		}
		return eldiaCaluroso;
	}
	//Dia mas seco
	public ClimaDiario elDiaMasSeco(ArrayList<ClimaDiario> climas){
		ClimaDiario elDiaMasSeco= climas.get(0);
		for(ClimaDiario dia: climas){
			if(dia.getPrecipitacion() < elDiaMasSeco.getPrecipitacion()){
				elDiaMasSeco= dia;
			}
		}
		return elDiaMasSeco;
	}
	public boolean lloveraHOY(ArrayList<ClimaDiario> climas){
		boolean respuesta=false;
		for(ClimaDiario dia:climas){
			if(dia.llueve()){
				respuesta=true;
			}
		}
		return respuesta;
	}
	
	//Los dias de bajo 0
	public ArrayList<ClimaDiario > losDiasBajoCero( ArrayList <ClimaDiario> climas){
		
		ArrayList<ClimaDiario > losDiasQueTienenTemperaturaBajoCero = new ArrayList <ClimaDiario> ();
		for(ClimaDiario dia : climas ){
			if(dia.esBajoCero()){
				losDiasQueTienenTemperaturaBajoCero.add(dia) ;	
			}
		}
		return losDiasQueTienenTemperaturaBajoCero;
	}
	//Los dias promedio mayor a 15
	public ArrayList<ClimaDiario> temperaturaPromedioMayorA15 ( ArrayList <ClimaDiario> climas){
		
		ArrayList <ClimaDiario> temperaturaPromedioMayorA15Grados = new ArrayList <ClimaDiario> ();
 		
		for (ClimaDiario dia : climas){
			
			if (dia.promedioTemperatura() > 15 ){
				temperaturaPromedioMayorA15Grados.add(dia);
			}
		}
		return temperaturaPromedioMayorA15Grados;
	}
	//Dias que no lloveran
	public ArrayList <ClimaDiario> diasQueNoLloveran (ArrayList <ClimaDiario> climas){
		
		ArrayList <ClimaDiario> diasQueNoLloveran = new ArrayList <ClimaDiario> ();
		for (ClimaDiario dia : climas){
			if ( dia.llueve()== false){
				diasQueNoLloveran.add(dia);
			}
		}
		return diasQueNoLloveran;
		
	}
	
}