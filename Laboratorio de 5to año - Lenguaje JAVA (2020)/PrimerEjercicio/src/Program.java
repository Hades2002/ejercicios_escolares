//Import del Array
import java.util.ArrayList;
public class Program {

	public static void main(String[] args) {
		//Add digitos al Array
		ArrayList<Integer> numero = new ArrayList<Integer>(6);
		numero.add(14);
		numero.add(78);
		numero.add(25);
		numero.add(15);
		numero.add(9);
		numero.add(30);
		
		//Llamar al metodo
		sumatoria(numero);
		promedio(numero);
		contiene(numero,4);
		contarRepeticiones(numero,4);
	}
	//Metodo de sumar
	public static int sumatoria(ArrayList<Integer>numero){
		int suma=0;
		for(Integer x : numero) {
			suma=suma+x;
		}
		System.out.println("La sumatoria total es ["+suma+"]");
		return suma;
	}
	//Metodo de promedio
	public static float promedio(ArrayList<Integer>numero) {
		int suma=0;
		int tamanio=numero.size();
		for(Integer x : numero) {
			suma=suma+x;
		}
		System.out.println("Promedio ["+suma/tamanio+"]");
		return suma/tamanio;
	}
	//Metodo de que contiene
	public static boolean contiene(ArrayList<Integer>numero , int numeroBuscado) {
		boolean estaelnum=false;
		for(Integer x : numero) {
			if(x==numeroBuscado) {
				estaelnum=true;
			}
		}
		System.out.println("El numero que usted indico ["+estaelnum+"]");
		return estaelnum;
	}
	//Contar las repeticiones de  tal numero
	public static int contarRepeticiones(ArrayList<Integer>numero, int numeroBuscado) {
		int cantidad=0;
		for(Integer x : numero) {
			if(x==numeroBuscado) {
				cantidad++;
			}
		}
		System.out.println("Cantidad de veces que aparece el ["+numeroBuscado+"]"+" - Cantidad ["+cantidad+"]");
		return cantidad;
	}
	
}
