#include <stdio.h>

int get_range(int n, int cells[n], int distance, int user, int *left_index, int *right_index){
  
  int temp = 0;
  
  for (int i=0; i<n; i++) {
    if (cells[i] >= *left_index && cells[i] <= *right_index) {
      printf("%d ", cells[i]);
      temp=1;
    }
  }
  if (!temp) {
    printf("USUARIO DESCONECTADO");
  }

  return 0;
}


int main(void) {
  int n, distance, user;
  scanf("%d %d %d", &n, &distance, &user);

  int cells[n];

  int left_index1, right_index1;
  int *left_index, *right_index;

  left_index1 = user-distance;
  right_index1 = user+distance;
  
  left_index = &left_index1;
  right_index = &right_index1;
  
  
  // Formação da lista cells[n]
  for (int i=0; i<n; i++) {
    scanf("%d", &cells[i]);
  }
  

  int resultado = get_range(n, cells, distance, user, left_index, right_index);
  
  return 0;
}
