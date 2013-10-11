/*
 * Asterisk -- An open source telephony toolkit.
 *
 * Copyright (C) 2012 - 2013, Digium, Inc.
 *
 * David M. Lee, II <dlee@digium.com>
 *
 * See http://www.asterisk.org for more information about
 * the Asterisk project. Please do not directly contact
 * any of the maintainers of this project for assistance;
 * the project provides a web site, mailing lists and IRC
 * channels for your use.
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2. See the LICENSE file
 * at the top of the source tree.
 */

/*! \file
 *
 * \brief Generated file - declares stubs to be implemented in
 * res/ari/resource_bridges.c
 *
 * Bridge resources
 *
 * \author David M. Lee, II <dlee@digium.com>
 */

/*
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * !!!!!                               DO NOT EDIT                        !!!!!
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * This file is generated by a mustache template. Please see the original
 * template in rest-api-templates/ari_resource.h.mustache
 */

#ifndef _ASTERISK_RESOURCE_BRIDGES_H
#define _ASTERISK_RESOURCE_BRIDGES_H

#include "asterisk/ari.h"

/*! \brief Argument struct for ast_ari_get_bridges() */
struct ast_get_bridges_args {
};
/*!
 * \brief List active bridges.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_get_bridges(struct ast_variable *headers, struct ast_get_bridges_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_new_bridge() */
struct ast_new_bridge_args {
	/*! \brief Type of bridge to create. */
	const char *type;
};
/*!
 * \brief Create a new bridge.
 *
 * This bridge persists until it has been shut down, or Asterisk has been shut down.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_new_bridge(struct ast_variable *headers, struct ast_new_bridge_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_get_bridge() */
struct ast_get_bridge_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
};
/*!
 * \brief Get bridge details.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_get_bridge(struct ast_variable *headers, struct ast_get_bridge_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_delete_bridge() */
struct ast_delete_bridge_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
};
/*!
 * \brief Shut down a bridge.
 *
 * If any channels are in this bridge, they will be removed and resume whatever they were doing beforehand.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_delete_bridge(struct ast_variable *headers, struct ast_delete_bridge_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_add_channel_to_bridge() */
struct ast_add_channel_to_bridge_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
	/*! \brief Array of Ids of channels to add to bridge */
	const char **channel;
	/*! \brief Length of channel array. */
	size_t channel_count;
	/*! \brief Parsing context for channel. */
	char *channel_parse;
	/*! \brief Channel's role in the bridge */
	const char *role;
};
/*!
 * \brief Add a channel to a bridge.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_add_channel_to_bridge(struct ast_variable *headers, struct ast_add_channel_to_bridge_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_remove_channel_from_bridge() */
struct ast_remove_channel_from_bridge_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
	/*! \brief Array of Ids of channels to remove from bridge */
	const char **channel;
	/*! \brief Length of channel array. */
	size_t channel_count;
	/*! \brief Parsing context for channel. */
	char *channel_parse;
};
/*!
 * \brief Remove a channel from a bridge.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_remove_channel_from_bridge(struct ast_variable *headers, struct ast_remove_channel_from_bridge_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_moh_start_bridge() */
struct ast_moh_start_bridge_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
	/*! \brief Channel's id */
	const char *moh_class;
};
/*!
 * \brief Play music on hold to a bridge or change the MOH class that is playing.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_moh_start_bridge(struct ast_variable *headers, struct ast_moh_start_bridge_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_moh_stop_bridge() */
struct ast_moh_stop_bridge_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
};
/*!
 * \brief Stop playing music on hold to a bridge.
 *
 * This will only stop music on hold being played via bridges/{bridgeId}/mohStart.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_moh_stop_bridge(struct ast_variable *headers, struct ast_moh_stop_bridge_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_play_on_bridge() */
struct ast_play_on_bridge_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
	/*! \brief Media's URI to play. */
	const char *media;
	/*! \brief For sounds, selects language for sound. */
	const char *lang;
	/*! \brief Number of media to skip before playing. */
	int offsetms;
	/*! \brief Number of milliseconds to skip for forward/reverse operations. */
	int skipms;
};
/*!
 * \brief Start playback of media on a bridge.
 *
 * The media URI may be any of a number of URI's. Currently sound: and recording: URI's are supported. This operation creates a playback resource that can be used to control the playback of media (pause, rewind, fast forward, etc.)
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_play_on_bridge(struct ast_variable *headers, struct ast_play_on_bridge_args *args, struct ast_ari_response *response);
/*! \brief Argument struct for ast_ari_record_bridge() */
struct ast_record_bridge_args {
	/*! \brief Bridge's id */
	const char *bridge_id;
	/*! \brief Recording's filename */
	const char *name;
	/*! \brief Format to encode audio in */
	const char *format;
	/*! \brief Maximum duration of the recording, in seconds. 0 for no limit. */
	int max_duration_seconds;
	/*! \brief Maximum duration of silence, in seconds. 0 for no limit. */
	int max_silence_seconds;
	/*! \brief Action to take if a recording with the same name already exists. */
	const char *if_exists;
	/*! \brief Play beep when recording begins */
	int beep;
	/*! \brief DTMF input to terminate recording. */
	const char *terminate_on;
};
/*!
 * \brief Start a recording.
 *
 * This records the mixed audio from all channels participating in this bridge.
 *
 * \param headers HTTP headers
 * \param args Swagger parameters
 * \param[out] response HTTP response
 */
void ast_ari_record_bridge(struct ast_variable *headers, struct ast_record_bridge_args *args, struct ast_ari_response *response);

#endif /* _ASTERISK_RESOURCE_BRIDGES_H */
