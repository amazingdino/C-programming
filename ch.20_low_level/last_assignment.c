#include<stdio.h>
#include<stdlib.h>

int main()
{
	// length sum avg
	int N; // how many col
	// prevent error(optional)
	if (scanf("%d", &N) != 1 || N<=0)
		return 0;
	
	// length
	int *L = (int *)malloc(sizeof(int)*N);
	if (!L)
    {
		fprintf(stderr, "malloc failed\n");
		return 1;
	} //prevention

	// length insert
	for (int i=0; i<N; i++)
    {
		if (scanf("%d", &L[i]) != 1 || L[i] < 0){
			free(L);
			return 0;
		} // prevention
	}

	int **a = (int **)malloc(sizeof(int *) * N);
	if (!a)
    {
		fprintf(stderr, "malloc failed\n");
		free(L);
		return 1;
	} // prevention

	for (int i=0; i<N;i++)
    {
		if (L[i] == 0){
			a[i] = NULL;
			continue;
		}
		a[i] = (int *)malloc(sizeof(int) * L[i]);
		if (!a[i])
        {
			fprintf(stderr, "malloc failed\n");
			// free pre-allocated variable
			for(int k=0;k<i;k++)
				free(a[k]);
			free(a);
			free(L);
			return 1; //prevention
		}
	}
	// input
	// length & sum & avg
	for (int i=0;i<N;i++)
    {
		long long sum=0;
		for (int j=0;j<L[i];j++)
        {
			if (scanf("%d", &a[i][j]) != 1)
            {
				for(int k=0;k<N;k++)
					free(a[k]);
				free(a);
				free(L);
				return 0;
			} //prevention
			int x = a[i][j];
			sum += x;
		}
		double avg = (L[i] == 0) ? 0.0: (double)sum / (double)L[i];
		printf("row %d len %d sum %lld avg %.2f\n", i, L[i], sum, avg);
	}
	// free
	for (int i=0; i<N; i++)
    {
		free(a[i]);
	}
	free(a);
	free(L);
	return 0;
}