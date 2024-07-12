<script>
import CodeBlock from "../../CodeBlock.svelte";

let deque_init = `\`\`\`c
#include <stdio.h>
int main() {
    printf("Hello, World!");
    return 0;
}
\`\`\``;

</script>

<div class="all">
    <h1>Creation of a Novel Data Structure, Cache Locality Engineered Deque</h1>

    <div> 
        As my first writing, the creation of this data-structure best captures my intent with this blog. <br><br>

        The Cache Allocated Deque (affectionately called a "cleque") is a data structure I created to solve the nagging seeds of perfectionism in my head. 
        Data structure choice for cache is often more important than algorithmic complexity, so why are we constantly using queues with possibly random assortments of pointers? <br><br>

        As a result, I propose the cleque. You should not expect it to be: 
        <ul>
            <li>groundbreakingly fast</li>
            <li>memory efficient</li>
            <li>memory safe</li>
            <li>thread safe</li>
            <li>particularly practical in any use case</li>
        </ul>

        With all of these self-admitted shortcomings, and the cache locality engineered deque destined to fail from its conception, is there still insight to be gained? I certainly believe so.

        <h3>Current Deque Implementations:</h3>

        Here I'm going to be implementing a classic deque in C, and afterwards performing a short investigation of how higher level languages get around the shortcomings of the data structure I build. <br>

        <h2>C Deque with Heap Allocation</h2>

        <!-- Render the Markdown code block -->
        <div class="code-block">
            <CodeBlock markdown={deque_init} />
        </div>

        - possibly look at the source code for the C++ STL deque<br>
        - possibly look at the source code for the Rust deque<br>
        - possibly look at the source code for the Python deque<br>

        <h2>The Cache Locality Engineered Deque:</h2>
    </div>
</div>

<style>
    .all {
        font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    }
    h1 {
        width: 100%;
        font-weight: bold;
    }
    h2 {
        width: 100%;
        line-height: 150%;
        font-weight: bold;
        margin-bottom: 0;
    }
    .code-block {
        padding: 5px;
        border-radius: 5px;
        overflow-x: auto;
    }
</style>
