package Objeto;

public class TesteSimples{
	int campoInt;
	float campoFloat;
	long campoLong;
	double campoDouble;

	public void imprimirObjeto(){
		System.out.println(campoInt);
		System.out.println(campoFloat);
		System.out.println(campoLong);
		System.out.println(campoDouble);
	}
	
	public static void main(String [] args){
		TesteSimples objeto = new TesteSimples();
		objeto.campoInt = 1;
		objeto.campoFloat = 2;
		objeto.campoLong = 3;
		objeto.campoDouble = 4;
		objeto.imprimirObjeto();
	}
}

