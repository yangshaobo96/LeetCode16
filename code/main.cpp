#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <cstring>
#include <stack>
#include <list>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return NULL;
        else if(head->next==NULL) return head;
        ListNode *ppre=NULL;
        ListNode *p=head;
        ListNode *pnext=p->next;
        head=pnext;
        while(p&&pnext!=NULL){
            if(ppre!=NULL){
                ppre->next=pnext;
                ListNode *tmp=pnext->next;
                pnext->next=p;
                p->next=tmp;
                ppre=p;
                p=tmp;
                if(p!=NULL)
                    pnext=p->next;
                else pnext=NULL;

            }
            else{
                ListNode *tmp=pnext->next;
                pnext->next=p;
                p->next=tmp;
                ppre=p;
                p=tmp;
                if(p!=NULL)
                    pnext=p->next;
                else pnext=NULL;
            }
        }
        return head;
    }
};
int main(int argc, char *argv[]){
    ListNode *p=new ListNode(1);
    p->next=new ListNode(2);
    p->next->next=new ListNode(3);
    p->next->next->next=new ListNode(4);
    Solution a;
    a.swapPairs(p);
    return 0;
}
