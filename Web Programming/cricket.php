<?php
	$cricket=array(array("M S Dhoni",40),
			array("Virat Kholi",32),
			array("Jadeja",35),
			array("Dhawan",38),
			array("Rohit Sharma",39));
?>

<html>
	<table border="1">
	<tr>
		<th>Name</th>
		<th>Age</th>
	</tr>

	<tr>
		<td><?php echo $cricket[0][0]?></td>
		<td><?php echo $cricket[0][1]?></td>		
	</tr>
	<tr>
		<td><?php echo $cricket[1][0]?></td>
		<td><?php echo $cricket[1][1]?></td>		
	</tr>
	<tr>
		<td><?php echo $cricket[2][0]?></td>
		<td><?php echo $cricket[2][1]?></td>		
	</tr>
	<tr>
		<td><?php echo $cricket[3][0]?></td>
		<td><?php echo $cricket[3][1]?></td>		
	</tr>
	<tr>
		<td><?php echo $cricket[4][0]?></td>
		<td><?php echo $cricket[4][1]?></td>		
	</tr>
	</table>
</html>