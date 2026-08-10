<h2><a href="https://codeforces.com/contest/1866/problem/A" target="_blank" rel="noopener noreferrer">1866A — Ambitious Kid</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1866A](https://codeforces.com/contest/1866/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Ambitious Kid</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Chaneka, Pak Chanek's child, is an ambitious kid, so Pak Chanek gives her the following problem to test her ambition.</p><p>Given an array of integers $$$[A_1, A_2, A_3, \ldots, A_N]$$$. In one operation, Chaneka can choose one element, then increase or decrease the element's value by $$$1$$$. Chaneka can do that operation multiple times, even for different elements.</p><p>What is the minimum number of operations that must be done to make it such that $$$A_1 \times A_2 \times A_3 \times \ldots \times A_N = 0$$$?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$N$$$ ($$$1 \leq N \leq 10^5$$$).</p><p>The second line contains $$$N$$$ integers $$$A_1, A_2, A_3, \ldots, A_N$$$ ($$$-10^5 \leq A_i \leq 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>An integer representing the minimum number of operations that must be done to make it such that $$$A_1 \times A_2 \times A_3 \times \ldots \times A_N = 0$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005857491926389921" id="id0021206399204196902" class="input-output-copier">Copy</div></div><pre id="id005857491926389921">3
2 -6 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0023186730988691406" id="id007844779734571827" class="input-output-copier">Copy</div></div><pre id="id0023186730988691406">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0046464822963135977" id="id004758689116555045" class="input-output-copier">Copy</div></div><pre id="id0046464822963135977">1
-3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007839603118398253" id="id008754297939920945" class="input-output-copier">Copy</div></div><pre id="id0007839603118398253">3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0022270396403326287" id="id009739496615524417" class="input-output-copier">Copy</div></div><pre id="id0022270396403326287">5
0 -1 0 1 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005053180444328529" id="id006121543236363567" class="input-output-copier">Copy</div></div><pre id="id005053180444328529">0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, initially, $$$A_1\times A_2\times A_3=2\times(-6)\times5=-60$$$. Chaneka can do the following sequence of operations:</p><ol> <li> Decrease the value of $$$A_1$$$ by $$$1$$$. Then, $$$A_1\times A_2\times A_3=1\times(-6)\times5=-30$$$ </li><li> Decrease the value of $$$A_1$$$ by $$$1$$$. Then, $$$A_1\times A_2\times A_3=0\times(-6)\times5=0$$$ </li></ol><p>In the third example, Chaneka does not have to do any operations, because from the start, it already holds that $$$A_1\times A_2\times A_3\times A_4\times A_5=0\times(-1)\times0\times1\times0=0$$$</p></div>