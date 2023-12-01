<h1>
0x1A. C - Hash tables
</h1>

<h2>
In this program I will be implementing hash tables with the C programming language in the following task below:
</h2>


<!-- task 0-->
<div>
<h3>
0. >>> ht = {}
</h3>
<h4>
Write a function that creates a hash table.
</h4>
<ul>
<li>
Prototype: hash_table_t *hash_table_create(unsigned long int size);
<ul>
<li>
where size is the size of the array
</li>
</ul>
</li>

<li>
Returns a pointer to the newly created hash table
</li>

<li>
If something went wrong, your function should return NULL
</li>
</ul>
</div>


<!-- task 1-->
<div>
<h3>
1. djb2
</h3>
<h4>
Write a hash function implementing the djb2 algorithm.
</h4>
<ul>

<li>
Prototype: unsigned long int hash_djb2(const unsigned char *str);
</li>

<li>
You are allowed to copy and paste the function from <a href="https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8">this page</a>
</li>
</ul>
</div>