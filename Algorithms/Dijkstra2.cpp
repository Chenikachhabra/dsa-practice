#include <iostream>
using namespace std;

#define INF 99999
int main()
{
    int n;
    cout << "Enter the number of vertices";
    cin >> n;
    int A[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = 0;
        }
    }
    int edges;
    cout<<"Enter the number of edges";
    cin>>edges;
    for(int i =0 ; i<edges ; i++){
        int v ,u ,w;
        cin >>u>>v>>w;
        A[u][v] = w;
        
    }
    int dist[100] , visited[100] , parent [100];
    for (int i =0 ; i<n ; i++){
        dist[i] = INF;
        visited[i]=0;
        parent[i] = -1;
    }
    int source;
    cout<<"enter source";
    cin>>source;

    dist[source] =0;
    for(int i =0; i<n ; i++){
        int min = INF ;
        int u=-1;
        for(int j =0 ; j<n ; j++){
            if(!visited[j] && dist[j]<min){
                min = dist[j];
                u=j;
            }
        }
        if (u == -1){
            break;
        }
        visited[u]  =1;
        for(int v =0 ; v<n ; v++){
            if(A[u][v] !=0 && !visited[v]){
                if(dist[u] + A[u][v] <dist[v]){
                    dist[v] = dist[u]+A[u][v];
                    parent[v]=u;
                }
            }
        }
    }
     cout<<"vertex distance parent";
        for(int i =0 ; i<n ; i++){
            cout<<i<<" "<<dist[i]<<" "<<parent[i];
        }
     return 0;
}