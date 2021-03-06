/*   Plik: Count.c
   Wersja: 22 X 2002

 Zadanie 1:
   Napisa� funkcj� Count zliczaj�c� ile razy podana liczba
   ca�kowita wyst�puje na li�cie. */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int Count(struct node* head, int searchFor) {
  struct node* current=head;
  int count=0;
  while (current!=NULL) {
    if (current->data==searchFor)
      count++;
    current=current->next;
  }
  return count;
}

void BasicCaller() {
  struct node* head=NULL;
  int k, n;
  Push(&head,13);
  Push(&head,11);
  Push(&head,11);
  Push(&head,13);
  Push(&head,13);
  n=13;
  k=Count(head,n); /* k powinno by� r�wne 3 */
  ShowLinkedList(head);
  printf("\tLiczba %d wyst�puje %d razy na li�cie.\n", n, k);
}

int main() {
  BasicCaller();
  return EXIT_SUCCESS;
}
