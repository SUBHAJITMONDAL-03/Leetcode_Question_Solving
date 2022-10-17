<h2><a href="https://leetcode.com/problems/string-without-aaa-or-bbb/">984. String Without AAA or BBB</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two integers <code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code>, return <strong style="user-select: auto;">any</strong> string <code style="user-select: auto;">s</code> such that:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> has length <code style="user-select: auto;">a + b</code> and contains exactly <code style="user-select: auto;">a</code> <code style="user-select: auto;">'a'</code> letters, and exactly <code style="user-select: auto;">b</code> <code style="user-select: auto;">'b'</code> letters,</li>
	<li style="user-select: auto;">The substring <code style="user-select: auto;">'aaa'</code> does not occur in <code style="user-select: auto;">s</code>, and</li>
	<li style="user-select: auto;">The substring <code style="user-select: auto;">'bbb'</code> does not occur in <code style="user-select: auto;">s</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> a = 1, b = 2
<strong style="user-select: auto;">Output:</strong> "abb"
<strong style="user-select: auto;">Explanation:</strong> "abb", "bab" and "bba" are all correct answers.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> a = 4, b = 1
<strong style="user-select: auto;">Output:</strong> "aabaa"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= a, b &lt;= 100</code></li>
	<li style="user-select: auto;">It is guaranteed such an <code style="user-select: auto;">s</code> exists for the given <code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code>.</li>
</ul>
</div>