<article>
	<form action="form_login.php" method="post">
		<fieldset>
			<legend>Entre na sua conta:</legend>
			<p>
				<label>Usuário:</label>
				<select name="nomeUsuario">
					<?php
						selecionar_usuario();
					?>
				</select>
				
				<label> Senha:</label>
				<input type = "password" name = "senhaLogin" required = "required"/>
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