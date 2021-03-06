/*
 * Copyright (c) 2000-2005 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * @OSF_FREE_COPYRIGHT@
 */
/*
 * @APPLE_FREE_COPYRIGHT@
 */

#ifndef	_DDB_DB_LTR_H_
#define	_DDB_DB_LTR_H_

#include <machine/db_machdep.h>
#include <kern/task.h>

/*
 * Prototypes for functions exported by this module.
 */

void db_list_pmap(db_expr_t, boolean_t, db_expr_t, char *);
void db_low_trace(db_expr_t, boolean_t, db_expr_t, char *);
void db_display_long(db_expr_t, boolean_t, db_expr_t, char *);
void db_display_char(db_expr_t, boolean_t, db_expr_t, char *);
void db_display_real(db_expr_t, boolean_t, db_expr_t, char *);
void db_display_virtual(db_expr_t, boolean_t, db_expr_t, char *);
void db_display_mappings(db_expr_t, boolean_t, db_expr_t, char *);
void db_display_hash(db_expr_t, boolean_t, db_expr_t, char *);
void db_display_pmap(db_expr_t, boolean_t, db_expr_t, char *);
void db_display_iokit(db_expr_t, boolean_t, db_expr_t, char *);
void db_display_save(db_expr_t, boolean_t, db_expr_t, char *);
void db_display_xregs(db_expr_t, boolean_t, db_expr_t, char *);
void db_display_kmod(db_expr_t, boolean_t, db_expr_t, char *);
void db_gsnoop(db_expr_t, boolean_t, db_expr_t count, char *);
void db_check_mappings(db_expr_t, boolean_t, db_expr_t, char *);
void db_check_pmaps(db_expr_t, boolean_t, db_expr_t, char *);

#endif	/* !_DDB_DB_LTR_H_ */
