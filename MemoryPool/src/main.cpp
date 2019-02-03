#include "Memorypool.h"

int main(void)
{
	printf("press any key to start init and malloc memory pool\n");
	getchar();
	unsigned int a[10] = {8,16,32,64,128,256,512,1024,2048,4096};
	unsigned int b[10] = {100,500,1000,1500,2000,3000,4000,5000,4000,2000};
	buffer_pool_init(10,a,b);
	memory_pool_node* node = NULL;

	memory_pool_node* node1 = buffer_malloc(6);
	memory_pool_node* node2 = buffer_malloc(172);
	memory_pool_node* node3 = buffer_malloc(186);
	memory_pool_node* node4 = buffer_malloc(1300);
	memory_pool_node* node5 = buffer_malloc(2100);
	memory_pool_node* node6 = buffer_malloc(40);
	memory_pool_node* node7 = buffer_malloc(60);
	memory_pool_node* node8 = buffer_malloc(80);
	memory_pool_node* node9 = buffer_malloc(100);
	memory_pool_node* node10 = buffer_malloc(120);
	memory_pool_node* node11 = buffer_malloc(130);
	memory_pool_node* node12 = buffer_malloc(150);
	memory_pool_node* node13 = buffer_malloc(180);
	memory_pool_node* node14 = buffer_malloc(700);
	memory_pool_node* node15 = buffer_malloc(900);
	buffer_runtime_print();

	printf("\npress any key to free memory pool");
	getchar();
	getchar();
	buffer_free(node15);
	buffer_free(node14);
	buffer_free(node13);
	buffer_free(node12);
	buffer_free(node11);
	buffer_free(node10);
	buffer_free(node9);
	buffer_free(node8);
	buffer_free(node7);

	buffer_free(node6);
	buffer_free(node5);
	buffer_free(node4);
	buffer_free(node3);
	buffer_free(node2);
	buffer_free(node1);
	buffer_runtime_print();
	
	printf("\npress any key to destory memory pool");
	getchar();
	getchar();
	buffer_pool_destory();
	
	printf("\npress any key to quit\n");
	getchar();
	getchar();

	return 0;
}
