/*
 * gnrrows.c
$Log$
Revision 1.1  2005/09/28 20:54:53  kdejong
Initial version of internal csf library code.

Revision 1.1.1.1  2000/01/04 21:04:44  cees
Initial import Cees

Revision 2.0  1996/05/23 13:16:26  cees
csf2clean

Revision 1.1  1996/05/23 13:11:49  cees
Initial revision

Revision 1.3  1995/11/01 17:23:03  cees
.

 * Revision 1.2  1994/09/08  17:16:23  cees
 * added c2man docs + small code changes
 *
 * Revision 1.1  1994/08/26  13:33:23  cees
 * Initial revision
 *
 */
#ifndef lint
 static const char *rcs_id = 
 "$Header$";
#endif


#include "csf.h"
#include "csfimpl.h"

/* number of rows in a map 
 * RgetNrCols returns the number of rows in a map 
 * returns the number of rows in a map 
 *
 * example
 * .so examples/csfdump1.tr
 */
size_t RgetNrRows(
	const MAP *map) /* map handle */
{
	return(map->raster.nrRows);
}
