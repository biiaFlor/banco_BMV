<article>
	<form action="form_cadastro_usuario.php" method="post">
		<fieldset>
			<legend>Cadastro de Usuário:</legend>
			<p>
				<label>Nome:</label>
				<input type="text" name="nome" size="30"/>
				<label>Data de nascimento:</label>
				<input type="date" name="data"/>
				<label>Sexo:</label>
				<input type="radio" name="sexo"	value="Masculino" checked="checked"/>Masculino
				<input type="radio" name="sexo" value="Feminino"/>Feminino
			</p>
			<p>
				<label>Número da conta:</label>
				<input type="number" name="conta"	size="30"/>
				<label>Senha:</label>
				<input type="password" name="senha" size="15" />
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
</article>