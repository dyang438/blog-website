<script>
import ArticleItem from '../ArticleItem.svelte';

let articles = [
    {
        title: "Cache Locality, Branch Prediction, and the Deque",
        description: "Implementing a novel data structure meant to be cache/branching efficient, and investigating how the classic deque holds up in comparison.",
        time: "2024-07-11",
        href: "/blog/cleque"
    }

]
</script>


{#each articles as article}
    <ArticleItem title={article.title} description={article.description} time={article.time} href={article.href} />
{/each}

