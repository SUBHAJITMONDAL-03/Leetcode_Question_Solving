<h2><a href="https://leetcode.com/problems/determine-if-two-events-have-conflict/">2446. Determine if Two Events Have Conflict</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given two arrays of strings that represent two inclusive events that happened <strong style="user-select: auto;">on the same day</strong>, <code style="user-select: auto;">event1</code> and <code style="user-select: auto;">event2</code>, where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">event1 = [startTime<sub style="user-select: auto;">1</sub>, endTime<sub style="user-select: auto;">1</sub>]</code> and</li>
	<li style="user-select: auto;"><code style="user-select: auto;">event2 = [startTime<sub style="user-select: auto;">2</sub>, endTime<sub style="user-select: auto;">2</sub>]</code>.</li>
</ul>

<p style="user-select: auto;">Event times are valid 24 hours format in the form of <code style="user-select: auto;">HH:MM</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">conflict</strong> happens when two events have some non-empty intersection (i.e., some moment is common to both events).</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if there is a conflict between two events. Otherwise, return </em><code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> event1 = ["01:15","02:00"], event2 = ["02:00","03:00"]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The two events intersect at time 2:00.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> event1 = ["01:00","02:00"], event2 = ["01:20","03:00"]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The two events intersect starting from 01:20 to 02:00.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="position: relative; user-select: auto;"><strong style="user-select: auto;">Input:</strong> event1 = ["10:00","11:00"], event2 = ["14:00","15:00"]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> The two events do not intersect.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">evnet1.length == event2.length == 2.</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">event1[i].length == event2[i].length == 5</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">startTime<sub style="user-select: auto;">1</sub> &lt;= endTime<sub style="user-select: auto;">1</sub></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">startTime<sub style="user-select: auto;">2</sub> &lt;= endTime<sub style="user-select: auto;">2</sub></code></li>
	<li style="user-select: auto;">All the event times follow the <code style="user-select: auto;">HH:MM</code> format.</li>
</ul>
</div>