/*****************************************************************************

 @(#) $Id: mgcp.h,v 1.1.2.1 2010-02-22 14:25:53 brian Exp $

 -----------------------------------------------------------------------------

 Copyright (c) 2008-2009  Monavacon Limited <http://www.monavacon.com/>
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

 -----------------------------------------------------------------------------

 Last Modified $Date: 2010-02-22 14:25:53 $ by $Author: brian $

 -----------------------------------------------------------------------------

 $Log: mgcp.h,v $
 Revision 1.1.2.1  2010-02-22 14:25:53  brian
 - added new documentation files

 Revision 1.1.2.1  2009-06-21 11:25:34  brian
 - added files to new distro

 *****************************************************************************/

#ifndef __SS7_MGCP_H__
#define __SS7_MGCP_H__

#ident "@(#) $RCSfile: mgcp.h,v $ $Name:  $($Revision: 1.1.2.1 $) Copyright (c) 2008-2009 Monavacon Limited."

/* This file can be processed by doxygen(1). */

#define MGCP_ADD_REQ
#define MGCP_ADD_CON
#define MGCP_MODIFY_REQ
#define MGCP_MODIFY_CON
#define MGCP_SUBTRACT_REQ
#define MGCP_SUBTRACT_CON
#define MGCP_MOVE_REQ
#define MGCP_MOVE_CON
#define MGCP_OK_ACK
#define MGCP_ERROR_ACK
#define MGCP_AUDIT_VALUE_REQ
#define MGCP_AUDIT_VALUE_CON
#define MGCP_AUDIT_CAPABILITIES_REQ
#define MGCP_AUDIT_CAPABILITIES_CON
#define MGCP_NOTIFY_IND
#define MGCP_SERVICE_CHANGE_IND

#endif				/* __SS7_MGCP_H__ */