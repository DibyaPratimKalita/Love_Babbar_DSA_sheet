//{ Driver Code Starts
// Initial Template for C++
//  C program to find n'th Node in linked list
#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to get the kth node from the last of a linked list*/
int getKthFromLast(struct Node *head, int k);

/* Driver program to test above function*/

// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getKthFromLast(Node *head, int n)
    {
            int i=0;
        Node* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            i++;
        }
        int k=0;
        if(i<n){
            return -1;
        }
        int m = i-n;
        temp = head;
        while(k!=m){
            temp = temp->next;
            k++;     
        }
        return temp -> data;
    }
};




//{ Driver Code Starts.

int main() {
    int T, i, n, l, k;

    cin >> T;

    while (T--) {
        struct Node *head = NULL, *tail = NULL;

        cin >> n >> k;
        int firstdata;
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        for (i = 1; i < n; i++) {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution obj;
        cout << obj.getKthFromLast(head, k) << endl;
    }
    return 0;
}
// } Driver Code Ends