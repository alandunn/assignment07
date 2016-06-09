/*
(1) For this project, implement a class for expression

This project deals with a simple kind of
expression tree, where there are two kinds of nodes:

(a) Leaf nodes, which contain a real number as
their entry;

(b) Nonleaf nodes, which contain either the char-
acter + or the character * as their entry, and have ex-
actly two children.
trees, including operations for building expression
trees. Also include a recursive function to “evalu-
ate” a non-empty expression tree using these rules:

(a) If the tree has only one node (which must be
a leaf), then the evaluation of the tree returns the real
number that is the node’s entry;

(b) If the tree has more than one node, and the
root contains +, then first evaluate the left subtree,
then evaluate the right subtree, and add the results.

If the root contains *, then evaluate the two subtrees
and multiply the results.

For example, consider the small expression tree shown to the right.

The left subtree evaluates to 3+7, which is 10.

The right subtree evaluates to 14. So the entire
tree evaluates to 10*14, which is 140.
*/

#include <iostream>
#include <sstream>
#include <string>


using namespace std;

int main ()
{
    
}