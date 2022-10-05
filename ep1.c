#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int v, n, vaux;  //Variavel de auxilio
  float soma = 0, ord=0;
  float media, mediana=0, desvio_padrao;
  float variancia;  // Antes de achar o desvio padrão
  float min= sizeof v, max=sizeof v;
  float num[1000]; 

  printf("Digite a quantidade de elementos: ");
  scanf("%d", &n);
  printf("\n");
  

  for(v = 0; v < n; v++) {
    printf("Digite o valores #%d: ", v);
    scanf("%f", num+v );
    
    if (num[v]<min) min= num[v];   
    if (num[v]>max) max= num[v];
        
    soma += num[v];
      
    media = soma / n;
      
    variancia+= pow((num[v] - media), 2)/n;
      
    desvio_padrao = sqrt(variancia);
  }
  
  
    
  for(v = 0; v < n; v++) {
      for(vaux= v+1; vaux < n; vaux++) {
          if(num[v]>num[vaux]){
              ord= num[v];
              num[v]=num[vaux];
              num[vaux]=ord;
          }
      }
  }    
              
          if (n % 2 == 0) 
              mediana = (num[v / 2] + num[(v-1) / 2]) / 2;
          else 
              mediana = num[v / 2];
          

  printf("Media = %.2f \n", media);
    
  printf("min = %f\n", min);  
  
  printf("max = %f\n", max);  
    
  printf("Desvio Padrão = %.2f \n", desvio_padrao);  
    
  printf("Mediana = %2.1f \n", mediana);  

  return 0;
}
