lista = [6, 3, 12, 7, 24, 67, 29, 55, 69, 34, 56] # lista de números
def bubble_sort(arr): # função de ordenação bubblesort
    n = len(arr) # tamanho da lista
    for i in range(n): # loop de ordenação bubblesort
        for j in range(0, n-i-1): # loop de ordenação bubblesort 
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
bubble_sort(lista)
print(lista)


lista2  = [60, 33, 12, 79, 24, 67, 29, 55, 69, 34, 56]
bubble_sort(lista2)
print(lista2)