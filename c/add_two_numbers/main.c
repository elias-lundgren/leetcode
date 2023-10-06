/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode {
  int val;
  struct ListNode *next;
};

#include <stdio.h>
#include <stdlib.h>

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
  int carry = 0;

  struct ListNode *start = NULL;
  struct ListNode *prev = NULL;

  while (1) {
    if (l1 == NULL && l2 == NULL) {
      break;
    }

    int v1 = l1 == NULL ? 0 : l1->val;
    int v2 = l2 == NULL ? 0 : l2->val;

    int sum = (v1 + v2 + carry) % 10;
    carry = (v1 + v2 + carry) / 10;

    struct ListNode *node = malloc(sizeof(struct ListNode));
    node->val = sum;
    node->next = NULL;

    if (start == NULL) {
      start = node;
    }

    if (prev != NULL) {
      prev->next = node;
    }

    prev = node;

    if (l1 != NULL) {
      l1 = l1->next;
    }

    if (l2 != NULL) {
      l2 = l2->next;
    }
  }

  if (carry) {
    struct ListNode *node = malloc(sizeof(struct ListNode));

    node->val = carry;
    node->next = NULL;

    prev->next = node;
  }

  return start;
}
