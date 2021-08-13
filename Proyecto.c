# Corregir los cinco errores.
# incluye < iostream >

usando el espacio de nombres std;

int  main () {

 int n, aux
cout << " Ingrese la cantidad de numeros: " ;
 cin >> n;
 int V [n];
 para ( int i = 0 ; i <n; i ++) {
  cout << " \ n Numero " << i + 1 << " = " ;
  cin >> V [i]
 }

 para ( int i = 0 ; i <n; i +) {
  para ( int j = i + 1 ; j <n; j ++) {
   si (V [j] <V [i]) {
    aux = V [];
    V [i] = V [];
    V [j] = aux;
    
   }
  }
 }

cout << " Elementos Ordenados: " << endl;
 para ( int i = 0 ; i <n; i ++) {
  cout << V [i] << endl;
 }

 return  0 ;
}
