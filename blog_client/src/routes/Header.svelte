<script>
	import { page } from '$app/stores';
	import github from '$lib/images/github.svg';
</script>

<header>
	<div class="corner">
		<a href="https://github.com/dyang438">
			<img src={github} alt="SvelteKit" />
		</a>
		<div>
			<a id="username" href="https://github.com/dyang438">
				DYANG438
			</a>
		</div>
	</div>

	<nav>
		<ul>
			<li aria-current={$page.url.pathname === '/' ? 'page' : undefined}>
				<a href="/">Home</a>
			</li>
			<li aria-current={$page.url.pathname.startsWith('/blog') ? 'page' : undefined}>
				<a href="/blog">Blog</a>
			</li>
			<li aria-current={$page.url.pathname.startsWith('/snippets') ? 'page' : undefined}>
				<a href="/snippets">Snippets</a>
			</li>
		</ul>
	</nav>

	<div class="padding"></div>
</header>

<style>
	header {
		display: flex;
		justify-content: space-between;
		background-color: aliceblue;
	}

	.corner {
		width: 3em;
		height: 3em;
		display: flex;
		color: rgba(0, 0, 0, 1);
		font-weight: 700;
		font-size: 0.8rem;
		text-transform: uppercase;
		letter-spacing: 0.1em;
		text-decoration: none;
		transition: color 0.2s linear;
		font-family: aria-current;
	}

	#username{
		display: flex;
		height: 100%;
		align-items: center;
		padding: 0 0.5rem;
		color: black;
	}

	.padding{
		width: 3em;

	}

	.corner a {
		display: flex;
		align-items: center;
		justify-content: center;
		width: 100%;
		height: 100%;
	}

	.corner img {
		width: 2em;
		height: 2em;
		object-fit: contain;
	}

	nav {
		display: flex;
		justify-content: center;
		--color-text: black;
	}

	ul {
		position: relative;
		padding: 0;
		margin: 0;
		height: 3em;
		display: flex;
		justify-content: center;
		align-items: center;
		list-style: none;
		background: var(--background);
		background-size: contain;
	}

	li {
		position: relative;
		height: 100%;
	}

	li[aria-current='page']::before {
		--size: 6px;
		content: '';
		width: 0;
		height: 0;
		position: absolute;
		top: 0;
		left: calc(50% - var(--size));
		border: var(--size) solid transparent;
		border-top: var(--size) solid var(--color-theme-1);
	}

	nav a {
		display: flex;
		height: 100%;
		align-items: center;
		padding: 0 0.5rem;
		color: var(--color-text);
		font-weight: 700;
		font-size: 0.8rem;
		text-transform: uppercase;
		letter-spacing: 0.1em;
		text-decoration: none;
		transition: color 0.2s linear;
	}

	a:hover {
		color: var(--color-theme-1);
	}
</style>
