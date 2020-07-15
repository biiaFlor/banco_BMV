<article>
	<form action="form_cadastro_Opc.php" method="post">
		<fieldset>
			<legend>Escolha a operação desejada:</legend>
			<p>
				<label>Operação desejada:</label>
				<select name = "opc">
					<option value= "1"> Saque </option>;
					<option value= "2"> Deposito </option>;
				</select>
				
				<label> Valor:</label>
				<input type = "number" name = "valor" required = "required"/>
			</p>
			<input type="submit" value="Enviar"/>
		</fieldset>
	</form>
	<br/>
	<br/>
	<br/>
	<br/>
	<br/>
	<br/>
	<br/>
	<br/>
	<br/>
</article>