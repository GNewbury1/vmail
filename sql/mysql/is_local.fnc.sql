--
-- sql/mysql/is_local.fnc.sql
--
-- Copyright (C) 2010 @UK Plc, http://www.uk-plc.net
--
-- Author:
--    2010 Damien Churchill <damoxc@gmail.com>
--
-- This program is free software; you can redistribute it and/or modify
-- it under the terms of the GNU General Public License as published by
-- the Free Software Foundation; either version 3, or (at your option)
-- any later version.
--
-- This program is distributed in the hope that it will be useful,
-- but WITHOUT ANY WARRANTY; without even the implied warranty of
-- MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.    See the
-- GNU General Public License for more details.
--
-- You should have received a copy of the GNU General Public License
-- along with this program.    If not, write to:
--   The Free Software Foundation, Inc.,
--   51 Franklin Street, Fifth Floor
--   Boston, MA    02110-1301, USA.
--

DELIMITER $$

DROP FUNCTION `is_local`
CREATE `is_local`(
	_email VARCHAR(255)
) RETURNS INT
	READS SQL DATA
BEGIN

RETURN EXISTS (
	SELECT NULL FROM users
	WHERE email = _email
		UNION SELECT NULL FROM resolved_forwards
		WHERE source = _email);

END$$

DELIMITER ;
