/*****************************************************************************

 @(#) src/snmp/ucd_memdup.h

 -----------------------------------------------------------------------------

 Copyright (c) 2008-2015  Monavacon Limited <http://www.monavacon.com/>
 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation; version 3 of the License.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
 details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>, or
 write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 *****************************************************************************/

#ifndef __LOCAL_UCD_MEMDUP_H__
#define __LOCAL_UCD_MEMDUP_H__

#ifdef HAVE_NETSNMP_MEMDUP

/** Duplicates a memory block.
 *  Copies a existing memory location from a pointer to another, newly
    malloced, pointer.

 *	@param to       Pointer to allocate and copy memory to.
 *      @param from     Pointer to copy memory from.
 *      @param size     Size of the data to be copied.
 *      
 *	@return SNMPERR_SUCCESS	on success, SNMPERR_GENERR on failure.
 */
static inline int
memdup(u_char ** to, const void * from, size_t size)
{
    if (to == NULL)
        return SNMPERR_GENERR;
    if (from == NULL) {
        *to = NULL;
        return SNMPERR_SUCCESS;
    }
    if ((*to = (u_char *) malloc(size)) == NULL)
        return SNMPERR_GENERR;
    memcpy(*to, from, size);
    return SNMPERR_SUCCESS;

}                               /* end memdup() */

#endif				/* HAVE_NETSNMP_MEMDUP */

#endif				/* __LOCAL_UCD_MEMDUP_H__ */