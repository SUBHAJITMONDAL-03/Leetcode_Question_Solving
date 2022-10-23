<h2><a href="https://leetcode.com/problems/number-of-subarrays-with-gcd-equal-to-k/">2447. Number of Subarrays With GCD Equal to K</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the number of <strong style="user-select: auto;">subarrays</strong> of </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> where the greatest common divisor of the subarray's elements is </em><code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a contiguous non-empty sequence of elements within an array.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">greatest common divisor of an array</strong> is the largest integer that evenly divides all the array elements.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [9,3,1,2,6,3], k = 3
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The subarrays of nums where 3 is the greatest common divisor of all the subarray's elements are:
- [9,<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,1,2,6,3]
- [9,3,1,2,6,<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>]
- [<u style="user-select: auto;"><strong style="user-select: auto;">9,3</strong></u>,1,2,6,3]
- [9,3,1,2,<u style="user-select: auto;"><strong style="user-select: auto;">6,3</strong></u>]
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4], k = 7
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There are no subarrays of nums where 7 is the greatest common divisor of all the subarray's elements.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i], k &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>