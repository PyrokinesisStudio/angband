#ifndef INCLUDED_DEFINES_H
#define INCLUDED_DEFINES_H

/*
 * Copyright (c) 1997 Ben Harrison, James E. Wilson, Robert A. Koeneke
 *
 * This software may be copied and distributed for educational, research,
 * and not for profit purposes provided that this copyright and statement
 * are included in all such copies.  Other copyrights may also apply.
 */

/*
 * Do not edit this file unless you know *exactly* what you are doing.
 *
 * Some of the values in this file were chosen to preserve game balance,
 * while others are hard-coded based on the format of old save-files, the
 * definition of arrays in various places, mathematical properties, fast
 * computation, storage limits, or the format of external text files.
 *
 * Changing some of these values will induce crashes or memory errors or
 * savefile mis-reads.  Most of the comments in this file are meant as
 * reminders, not complete descriptions, and even a complete knowledge
 * of the source may not be sufficient to fully understand the effects
 * of changing certain definitions.
 *
 * Lastly, note that the code does not always use the symbolic constants
 * below, and sometimes uses various hard-coded values that may not even
 * be defined in this file, but which may be related to definitions here.
 * This is of course bad programming practice, but nobody is perfect...
 *
 * You have been warned.
 */



/*** Player flags ***/


/*
 * Bit flags for the "p_ptr->notice" variable
 */
#define PN_COMBINE      0x00000001L    /* Combine the pack */
#define PN_REORDER      0x00000002L    /* Reorder the pack */
#define PN_AUTOINSCRIBE 0x00000004L    /* Autoinscribe items */
#define PN_PICKUP       0x00000008L    /* Pick stuff up */
#define PN_SQUELCH      0x00000010L    /* Squelch stuff */
#define PN_SORT_QUIVER  0x00000020L    /* Sort the quiver */
#define PN_MON_MESSAGE	0x00000040L	   /* flush monster pain messages */
/* xxx (many) */


/*
 * Bit flags for the "p_ptr->update" variable
 */
#define PU_BONUS		0x00000001L	/* Calculate bonuses */
#define PU_TORCH		0x00000002L	/* Calculate torch radius */
/* xxx (many) */
#define PU_HP			0x00000010L	/* Calculate chp and mhp */
#define PU_MANA			0x00000020L	/* Calculate csp and msp */
#define PU_SPELLS		0x00000040L	/* Calculate spells */
/* xxx (many) */
#define PU_FORGET_VIEW	0x00010000L	/* Forget field of view */
#define PU_UPDATE_VIEW	0x00020000L	/* Update field of view */
/* xxx (many) */
#define PU_FORGET_FLOW	0x00100000L	/* Forget flow data */
#define PU_UPDATE_FLOW	0x00200000L	/* Update flow data */
/* xxx (many) */
#define PU_MONSTERS		0x10000000L	/* Update monsters */
#define PU_DISTANCE		0x20000000L	/* Update distances */
/* xxx */
#define PU_PANEL		0x80000000L	/* Update panel */


/*
 * Bit flags for the "p_ptr->redraw" variable
 */
#define PR_MISC			0x00000001L	/* Display Race/Class */
#define PR_TITLE		0x00000002L	/* Display Title */
#define PR_LEV			0x00000004L	/* Display Level */
#define PR_EXP			0x00000008L	/* Display Experience */
#define PR_STATS		0x00000010L	/* Display Stats */
#define PR_ARMOR		0x00000020L	/* Display Armor */
#define PR_HP			0x00000040L	/* Display Hitpoints */
#define PR_MANA			0x00000080L	/* Display Mana */
#define PR_GOLD			0x00000100L	/* Display Gold */

#define PR_HEALTH		0x00000800L	/* Display Health Bar */
#define PR_SPEED		0x00001000L	/* Display Extra (Speed) */
#define PR_STUDY		0x00002000L	/* Display Extra (Study) */
#define PR_DEPTH		0x00004000L	/* Display Depth */
#define PR_STATUS		0x00008000L
#define PR_DTRAP		0x00010000L /* Trap detection indicator */
#define PR_STATE		0x00020000L	/* Display Extra (State) */
#define PR_MAP			0x00040000L	/* Redraw whole map */

#define PR_INVEN		0x00080000L /* Display inven/equip */
#define PR_EQUIP		0x00100000L /* Display equip/inven */
#define PR_MESSAGE		0x00200000L /* Display messages */
#define PR_MONSTER		0x00400000L /* Display monster recall */
#define PR_OBJECT		0x00800000L /* Display object recall */
#define PR_MONLIST		0x01000000L /* Display monster list */
/* xxx */
#define PR_ITEMLIST     0x04000000L /* Display item list */

/* Display Basic Info */
#define PR_BASIC \
	(PR_MISC | PR_TITLE | PR_STATS | PR_LEV |\
	 PR_EXP | PR_GOLD | PR_ARMOR | PR_HP |\
	 PR_MANA | PR_DEPTH | PR_HEALTH | PR_SPEED)

/* Display Extra Info */
#define PR_EXTRA \
	(PR_STATUS | PR_STATE | PR_STUDY)


/*
 * Bit flags for the "p_ptr->window" variable.
 */
#define PW_INVEN            0x00000001L /* Display inven/equip */
#define PW_EQUIP            0x00000002L /* Display equip/inven */
#define PW_PLAYER_0         0x00000004L /* Display player (basic) */
#define PW_PLAYER_1         0x00000008L /* Display player (extra) */
#define PW_PLAYER_2         0x00000010L /* Display player (compact) */
#define PW_MAP              0x00000020L /* Display dungeon map */
#define PW_MESSAGE          0x00000040L /* Display messages */
#define PW_OVERHEAD         0x00000080L /* Display overhead view */
#define PW_MONSTER          0x00000100L /* Display monster recall */
#define PW_OBJECT           0x00000200L /* Display object recall */
#define PW_MONLIST          0x00000400L /* Display monster list */
#define PW_STATUS           0x00000800L /* Display status */
#define PW_ITEMLIST         0x00001000L /* Display item list */
/* xxx */


#define PW_MAX_FLAGS		16


/*** Macro Definitions ***/

/*
 * Hack -- The main "screen"
 */
#define term_screen	(angband_term[0])


#endif /* !INCLUDED_DEFINES_H */
